/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ouyang_srtp_SrtpStreamSender */

#ifndef _Included_com_ouyang_srtp_SrtpStreamSender
#define _Included_com_ouyang_srtp_SrtpStreamSender
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ouyang_srtp_SrtpStreamSender
 * Method:    initialize
 * Signature: (Ljava/lang/String;ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_ouyang_srtp_SrtpStreamSender_initialize
  (JNIEnv *, jobject, jstring, jint, jstring, jint);

/*
 * Class:     com_ouyang_srtp_SrtpStreamSender
 * Method:    destroy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ouyang_srtp_SrtpStreamSender_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_ouyang_srtp_SrtpStreamSender
 * Method:    sendto
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_ouyang_srtp_SrtpStreamSender_sendto
  (JNIEnv *, jobject, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
