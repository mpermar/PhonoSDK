/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_phono_codecs_speex_NativeSpeexCodec */

#ifndef _Included_com_phono_codecs_speex_NativeSpeexCodec
#define _Included_com_phono_codecs_speex_NativeSpeexCodec
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_phono_codecs_speex_NativeSpeexCodec
 * Method:    initCodec
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_phono_codecs_speex_NativeSpeexCodec_initCodec
  (JNIEnv *, jobject);

/*
 * Class:     com_phono_codecs_speex_NativeSpeexCodec
 * Method:    speexEncode
 * Signature: ([B[S)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_phono_codecs_speex_NativeSpeexCodec_speexEncode
  (JNIEnv *, jobject, jbyteArray, jshortArray);

/*
 * Class:     com_phono_codecs_speex_NativeSpeexCodec
 * Method:    speexDecode
 * Signature: ([B[B[S)V
 */
JNIEXPORT void JNICALL Java_com_phono_codecs_speex_NativeSpeexCodec_speexDecode
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jshortArray);

/*
 * Class:     com_phono_codecs_speex_NativeSpeexCodec
 * Method:    freeCodec
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_phono_codecs_speex_NativeSpeexCodec_freeCodec
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
