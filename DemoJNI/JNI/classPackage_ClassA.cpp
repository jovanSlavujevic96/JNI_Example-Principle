#include "classPackage_ClassA.h"
#include "NekiLib.h"
#include <iostream>

/*
 * Class:     classPackage_ClassA
 * Method:    passString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_classPackage_ClassA_passString
  (JNIEnv *env, jobject obj, jstring str)
{   
    if(NULL == obj)
    {
        std::cout << "object not allocated\n";
        return;
    }
    std::string chars = env->GetStringUTFChars (str, 0);
    A a(chars);
    jint values[2] = {a.getI(), a.getJ() };
    jclass jclazz = env->FindClass("classPackage/ClassA"); 
    std::string methodNames[2] = {"setI", "setJ"};
    const char* methodType = "(I)V";
    
    for(int i=0; i<2; ++i)
    {
        jmethodID mid = env->GetMethodID (jclazz, methodNames[i].c_str(), methodType);
        if(NULL == mid)
        {
            std::cout << "method with name: " << methodNames[i] << " and type: " << methodType << '\n';
            return;
        }
        env->CallVoidMethod(obj, mid, values[i]);
    }
}