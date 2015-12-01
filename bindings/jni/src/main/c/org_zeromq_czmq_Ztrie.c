/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "../../native/include/org_zeromq_czmq_Ztrie.h"

JNIEXPORT jlong JNICALL
Java_ztrie__1_1new (JNIEnv *env, jclass c, jchar delimiter)
{
    jlong new_ = (jlong) ztrie_new ((char) delimiter);
    return new_;
}

JNIEXPORT void JNICALL
Java_ztrie__1_1destroy (JNIEnv *env, jclass c, jlong self_p)
{
    ztrie_destroy ((ztrie_t **) &self_p);
}

JNIEXPORT jint JNICALL
Java_ztrie__1_1remove_route (JNIEnv *env, jclass c, jlong self, jstring path)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    jint remove_route_ = (jint) ztrie_remove_route ((ztrie_t *) self, path_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    return remove_route_;
}

JNIEXPORT jboolean JNICALL
Java_ztrie__1_1matches (JNIEnv *env, jclass c, jlong self, jstring path)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    jboolean matches_ = (jboolean) ztrie_matches ((ztrie_t *) self, path_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    return matches_;
}

JNIEXPORT jlong JNICALL
Java_ztrie__1_1hit_data (JNIEnv *env, jclass c, jlong self)
{
    jlong hit_data_ = (jlong) ztrie_hit_data ((ztrie_t *) self);
    return hit_data_;
}

JNIEXPORT jlong JNICALL
Java_ztrie__1_1hit_parameter_count (JNIEnv *env, jclass c, jlong self)
{
    jlong hit_parameter_count_ = (jlong) ztrie_hit_parameter_count ((ztrie_t *) self);
    return hit_parameter_count_;
}

JNIEXPORT jlong JNICALL
Java_ztrie__1_1hit_parameters (JNIEnv *env, jclass c, jlong self)
{
    jlong hit_parameters_ = (jlong) ztrie_hit_parameters ((ztrie_t *) self);
    return hit_parameters_;
}

JNIEXPORT jstring JNICALL
Java_ztrie__1_1hit_asterisk_match (JNIEnv *env, jclass c, jlong self)
{
    char *hit_asterisk_match_ = (char *) ztrie_hit_asterisk_match ((ztrie_t *) self);
    jstring string = (*env)->NewStringUTF (env, hit_asterisk_match_);
    return string;
}

JNIEXPORT void JNICALL
Java_ztrie__1_1print (JNIEnv *env, jclass c, jlong self)
{
    ztrie_print ((ztrie_t *) self);
}

JNIEXPORT void JNICALL
Java_ztrie__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    ztrie_test ((bool) verbose);
}
