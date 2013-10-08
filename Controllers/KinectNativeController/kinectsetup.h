/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector */

#ifndef _Included_org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector
#define _Included_org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector
#ifdef __cplusplus
extern "C" {
#endif
#undef org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector_ROTATION_XY_SCALE
#define org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector_ROTATION_XY_SCALE 0.15f
#undef org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector_ROTATION_Z_SCALE
#define org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector_ROTATION_Z_SCALE 1.15f
/*
 * Class:     org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector
 * Method:    registerKinect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector_registerKinect
  (JNIEnv *, jobject);

/*
 * Class:     org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector
 * Method:    deregisterKinect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_odonoghuelab_molecularcontroltoolkit_internal_KinectConnector_deregisterKinect
  (JNIEnv *, jobject);

enum AquariaAction
{
	ActionNone,
	ActionReset,
    ActionShow,
    ActionLoad,
	ActionZoom,
	ActionSearch,
	ActionSelectAll,
	ActionSelectUp,
	ActionSelectLigand,
	ActionSelectAllLigands,
	ActionSelectNextLigand,
	ActionSelectProximity,
	ActionSelectResidue,
	ActionSelectChain,
	ActionSelectSubChain,
	ActionDeselect,
	ActionSpin,
	ActionStopSpin,
	ActionSpinCrazy,
	ActionCopy,
	ActionPaste,
	ActionHandsOn,
	ActionHandsOff,
	ActionWakeUp,
	ActionGoToSleep,
	ActionColorDisplacement,
	ActionColorStructure,
	ActionColorSecondaryStructure,
	ActionColorSequenceSimilarity
};

void enableHands(bool enabled);
void zoomNow(int zoom);
void panNow(int x, int y);
void point(float x, float y);
void rotateNow(int rotateX, int rotateY, int rotateZ);
void processSpeech(AquariaAction action);
void processSpeechSearch(LPCWSTR searchTerm);


#ifdef __cplusplus
}
#endif
#endif
