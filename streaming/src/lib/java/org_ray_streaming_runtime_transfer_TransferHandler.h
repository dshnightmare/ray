/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ray_streaming_runtime_transfer_TransferHandler */

#ifndef _Included_org_ray_streaming_runtime_transfer_TransferHandler
#define _Included_org_ray_streaming_runtime_transfer_TransferHandler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ray_streaming_runtime_transfer_TransferHandler
 * Method:    createWriterClientNative
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_org_ray_streaming_runtime_transfer_TransferHandler_createWriterClientNative(JNIEnv *,
                                                                                 jobject,
                                                                                 jobject,
                                                                                 jobject);

/*
 * Class:     org_ray_streaming_runtime_transfer_TransferHandler
 * Method:    createReaderClientNative
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL
Java_org_ray_streaming_runtime_transfer_TransferHandler_createReaderClientNative(JNIEnv *,
                                                                                 jobject,
                                                                                 jobject,
                                                                                 jobject);

/*
 * Class:     org_ray_streaming_runtime_transfer_TransferHandler
 * Method:    handleWriterMessageNative
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL
Java_org_ray_streaming_runtime_transfer_TransferHandler_handleWriterMessageNative(
    JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     org_ray_streaming_runtime_transfer_TransferHandler
 * Method:    handleWriterMessageSyncNative
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_streaming_runtime_transfer_TransferHandler_handleWriterMessageSyncNative(
    JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     org_ray_streaming_runtime_transfer_TransferHandler
 * Method:    handleReaderMessageNative
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL
Java_org_ray_streaming_runtime_transfer_TransferHandler_handleReaderMessageNative(
    JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     org_ray_streaming_runtime_transfer_TransferHandler
 * Method:    handleReaderMessageSyncNative
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_streaming_runtime_transfer_TransferHandler_handleReaderMessageSyncNative(
    JNIEnv *, jobject, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
