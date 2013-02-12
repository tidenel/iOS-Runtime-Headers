/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVCamera, CALayer, NSArray, NSDictionary, NSString, NSURL;

@interface AVCapture : NSObject {
    NSString *_captureMode;
    NSURL *_fileURLForRecording;
    BOOL _isCapturingPhoto;
    struct AVCapturePrivate { struct OpaqueFigRecorder {} *x1; } *_priv;
    NSString *_qualityPreset;
    BOOL _returnIOSurface;
    AVCamera *_sourceCamera;
}

@property unsigned int audioCaptureFormat;
@property(readonly) NSArray * audioLevel;
@property BOOL audioMeteringEnabled;
@property float autoExposureTarget;
@property(retain) NSString * captureMode;
@property BOOL chapterMarkersEnabled;
@property float contrast;
@property BOOL dumpSensorInfo;
@property(retain) NSString * faceDetectionMode;
@property(retain) NSURL * fileURLForRecording;
@property(retain) NSString * flashMode;
@property long long freeDiskSpaceLimit;
@property(readonly) BOOL isCapturingPhoto;
@property(readonly) BOOL isHighDynamicRangeAvailable;
@property(readonly) BOOL isPaused;
@property(readonly) BOOL isPreviewing;
@property(readonly) BOOL isRecording;
@property(readonly) BOOL isTorchReady;
@property BOOL locationMetadataTrackEnabled;
@property BOOL lockAutoExposure;
@property BOOL lockAutoWhiteBalance;
@property(readonly) int maxJPEGSize;
@property(copy) NSDictionary * metadata;
@property BOOL mirrorPreview;
@property BOOL monitorSubjectArea;
@property int noiseReductionMethod;
@property(readonly) int noiseReductionMethodCount;
@property(readonly) NSString * noiseReductionMethodName;
@property(retain) NSString * orientation;
@property BOOL pauseRecordingOnInterruption;
@property(retain) NSString * qualityPreset;
@property(readonly) double recordedDuration;
@property double recordedDurationLimit;
@property(readonly) long long recordedFileSizeBytes;
@property long long recordedFileSizeBytesLimit;
@property float saturation;
@property(retain) AVCamera * sourceCamera;
@property BOOL suspendPreviewOnPhotoCapture;
@property(retain) NSString * torchMode;
@property BOOL useFlashAFAssist;
@property BOOL useFlashRedEyeReduction;
@property(retain) CALayer * videoPreviewLayer;
@property(retain) NSString * videoPreviewLayerOrientation;
@property(retain) NSString * videoPreviewLayerScalingMode;
@property float whiteBalance;

+ (id)avOrientationMap;
+ (id)availableModes;
+ (id)convertMoofToMoovInFile:(id)arg1;
+ (id)faceDetectionModeMap;
+ (id)flashModeMap;
+ (id)focusModeMap;
+ (id)presetMap;
+ (id)reasonMap;
+ (id)scalingModeMap;
+ (id)torchModeMap;
+ (id)updateMetadataInFile:(id)arg1 withMetadata:(id)arg2;

- (BOOL)addChapterMarker:(id)arg1 atTime:(double)arg2;
- (unsigned int)audioCaptureFormat;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (id)audioLevel;
- (BOOL)audioMeteringEnabled;
- (float)autoExposureTarget;
- (id)captureFormatForCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)captureMode;
- (BOOL)capturePhoto:(id)arg1;
- (BOOL)capturePhoto;
- (BOOL)chapterMarkersEnabled;
- (float)contrast;
- (void)dealloc;
- (void)didCancelFocusingHandler:(id)arg1;
- (void)didCompleteOutputHandler:(id)arg1;
- (void)didFailToStartRecordingHandler:(id)arg1;
- (void)didFinishFocusingHandler:(id)arg1;
- (void)didStartFocusingHandler:(id)arg1;
- (void)didStopRecordingHandler:(id)arg1;
- (BOOL)dumpSensorInfo;
- (id)faceDetectionMode;
- (id)fileURLForRecording;
- (id)flashMode;
- (BOOL)focusUsingMethod:(id)arg1 options:(id)arg2;
- (long long)freeDiskSpaceLimit;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (id)init;
- (id)initLocal;
- (id)initWithCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)initWithFigRecorderCreateFunction:(int (*)())arg1 captureMode:(id)arg2 qualityPreset:(id)arg3;
- (BOOL)isCapturingPhoto;
- (BOOL)isHighDynamicRangeAvailable;
- (BOOL)isPaused;
- (BOOL)isPreviewing;
- (BOOL)isRecording;
- (BOOL)isTorchReady;
- (BOOL)locationMetadataTrackEnabled;
- (BOOL)lockAutoExposure;
- (BOOL)lockAutoWhiteBalance;
- (int)maxJPEGSize;
- (id)metadata;
- (BOOL)mirrorPreview;
- (BOOL)monitorSubjectArea;
- (int)noiseReductionMethod;
- (int)noiseReductionMethodCount;
- (id)noiseReductionMethodName;
- (id)objectForMetadataKey:(id)arg1;
- (id)optionsForCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (id)orientation;
- (BOOL)pausePreview;
- (BOOL)pauseRecording;
- (BOOL)pauseRecordingOnInterruption;
- (void)photoTakenHandler:(id)arg1;
- (id)qualityPreset;
- (double)recordedDuration;
- (double)recordedDurationLimit;
- (long long)recordedFileSizeBytes;
- (long long)recordedFileSizeBytesLimit;
- (BOOL)resumePreview;
- (BOOL)resumeRecording;
- (float)saturation;
- (void)setAudioCaptureFormat:(unsigned int)arg1;
- (void)setAudioMeteringEnabled:(BOOL)arg1;
- (void)setAutoExposureTarget:(float)arg1;
- (BOOL)setCaptureMode:(id)arg1 qualityPreset:(id)arg2;
- (void)setCaptureMode:(id)arg1;
- (void)setChapterMarkersEnabled:(BOOL)arg1;
- (void)setContrast:(float)arg1;
- (void)setDumpSensorInfo:(BOOL)arg1;
- (void)setFaceDetectionMode:(id)arg1;
- (void)setFileURLForRecording:(id)arg1;
- (void)setFlashMode:(id)arg1;
- (void)setFreeDiskSpaceLimit:(long long)arg1;
- (void)setIsCapturingPhoto:(BOOL)arg1;
- (void)setLocationMetadataTrackEnabled:(BOOL)arg1;
- (void)setLockAutoExposure:(BOOL)arg1;
- (void)setLockAutoWhiteBalance:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMirrorPreview:(BOOL)arg1;
- (void)setMonitorSubjectArea:(BOOL)arg1;
- (void)setNoiseReductionMethod:(int)arg1;
- (void)setObject:(id)arg1 forMetadataKey:(id)arg2;
- (void)setOrientation:(id)arg1;
- (void)setPauseRecordingOnInterruption:(BOOL)arg1;
- (void)setQualityPreset:(id)arg1;
- (void)setRecordedDurationLimit:(double)arg1;
- (void)setRecordedFileSizeBytesLimit:(long long)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSourceCamera:(id)arg1;
- (void)setSuspendPreviewOnPhotoCapture:(BOOL)arg1;
- (void)setTorchMode:(id)arg1;
- (void)setUseFlashAFAssist:(BOOL)arg1;
- (void)setUseFlashRedEyeReduction:(BOOL)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)setVideoPreviewLayerOrientation:(id)arg1;
- (void)setVideoPreviewLayerScalingMode:(id)arg1;
- (void)setWhiteBalance:(float)arg1;
- (id)sourceCamera;
- (BOOL)startPreview;
- (BOOL)startRecording;
- (BOOL)stopPreview;
- (BOOL)stopRecording;
- (BOOL)suspendPreviewOnPhotoCapture;
- (id)torchMode;
- (BOOL)useFlashAFAssist;
- (BOOL)useFlashRedEyeReduction;
- (id)videoPreviewLayer;
- (id)videoPreviewLayerOrientation;
- (id)videoPreviewLayerScalingMode;
- (float)whiteBalance;

@end
