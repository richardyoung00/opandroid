/*******************************************************************************
 *
 *  Copyright (c) 2014 , Hookflash Inc.
 *  All rights reserved.
 *  
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  
 *  1. Redistributions of source code must retain the above copyright notice, this
 *  list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 *  and/or other materials provided with the distribution.
 *  
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *  
 *  The views and conclusions contained in the software and documentation are those
 *  of the authors and should not be interpreted as representing official policies,
 *  either expressed or implied, of the FreeBSD Project.
 *******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPIdentityLookup */

#ifndef _Included_com_openpeer_javaapi_OPIdentityLookup
#define _Included_com_openpeer_javaapi_OPIdentityLookup
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    toDebugString
 * Signature: (Lcom/openpeer/javaapi/OPIdentityLookup;Z)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_toDebugString
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    create
 * Signature: (Lcom/openpeer/javaapi/OPAccount;Lcom/openpeer/javaapi/OPIdentityLookupDelegate;Ljava/util/List;Ljava/lang/String;)Lcom/openpeer/javaapi/OPIdentityLookup;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_create
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getStableID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getStableID
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    isComplete
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_isComplete
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    wasSuccessful
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_wasSuccessful
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    cancel
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_cancel
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getUpdatedIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getUpdatedIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getUnchangedIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getUnchangedIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getInvalidIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getInvalidIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    releaseCoreObjects
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_releaseCoreObjects
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
