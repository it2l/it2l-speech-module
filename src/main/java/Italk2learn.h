/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Italk2learn */

#ifndef _Included_Italk2learn
#define _Included_Italk2learn
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Italk2learn
 * Method:    speechrecognition
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_Italk2learn_speechrecognition
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     Italk2learn
 * Method:    openASRListener
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_Italk2learn_openASRListener
  (JNIEnv *, jobject);

/*
 * Class:     Italk2learn
 * Method:    closeASRListener
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Italk2learn_closeASRListener
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif