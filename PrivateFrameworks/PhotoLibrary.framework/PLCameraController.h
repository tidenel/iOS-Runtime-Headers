/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PLCameraControllerDelegate>, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString, NSTimer, SBSAccelerometer;

@interface PLCameraController : NSObject <SBSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int supportsVideo : 1; 
        unsigned int supportsFocus : 1; 
        unsigned int supportsExposure : 1; 
        unsigned int supportsZoom : 1; 
        unsigned int supportsHDR : 1; 
        unsigned int supportsPanorama : 1; 
        unsigned int hasFlash : 1; 
        unsigned int hasFrontCamera : 1; 
        unsigned int deferStartVideoCapture : 1; 
        unsigned int inCall : 1; 
        unsigned int isCapturingPanorama : 1; 
        unsigned int focusDisabled : 1; 
        unsigned int focusWasModified : 1; 
        unsigned int serverDied : 1; 
        unsigned int didGetDeviceUnavailableInBackground : 1; 
        unsigned int didSetLocationData : 1; 
        unsigned int isChangingMode : 1; 
        unsigned int flashWillFireAutomatically : 1; 
        unsigned int isCameraApp : 1; 
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate : 1; 
        unsigned int logFocusInfo : 1; 
        unsigned int logPreviewInfo : 1; 
        unsigned int logCaptureInfo : 1; 
        unsigned int logFlashInfo : 1; 
        unsigned int logDebugInfo : 1; 
        unsigned int logPanoInfo : 1; 
        unsigned int enableFirstLastFrame : 1; 
        unsigned int enable720p60Recording : 1; 
        unsigned int convertSampleBufferToJPEG : 1; 
        unsigned int delegateDidStartSession : 1; 
        unsigned int delegateWillStartPreview : 1; 
        unsigned int delegatePreviewDidStart : 1; 
        unsigned int delegateSessionDidStart : 1; 
        unsigned int delegateDidStopSession : 1; 
        unsigned int delegateWillStopSession : 1; 
        unsigned int delegateSessionDidStop : 1; 
        unsigned int delegateSessionWasInterrupted : 1; 
        unsigned int delegateSessionInterruptionEnded : 1; 
        unsigned int delegateServerDied : 1; 
        unsigned int delegateCleanApertureDidChange : 1; 
        unsigned int delegateModeWillChange : 1; 
        unsigned int delegateModeDidChange : 1; 
        unsigned int delegateWillTakePhoto : 1; 
        unsigned int delegateDidTakePhoto : 1; 
        unsigned int delegateCapturedPhoto : 1; 
        unsigned int delegateDidChangeCaptureAbility : 1; 
        unsigned int delegateDidUpdatePanoramaPreview : 1; 
        unsigned int delegateWillStopPanoramaCapture : 1; 
        unsigned int delegatePanoramaWillStartProcessing : 1; 
        unsigned int delegatePanoramaDidStopProcessing : 1; 
        unsigned int delegateCapturedPanorama : 1; 
        unsigned int delegateVideoCaptureDidStart : 1; 
        unsigned int delegateDidStopVideoCapture : 1; 
        unsigned int delegateVideoCaptureDidStop : 1; 
        unsigned int delegateWillStartAutofocus : 1; 
        unsigned int delegateFocusDidStart : 1; 
        unsigned int delegateFocusDidEnd : 1; 
        unsigned int delegateFaceMetadataDidChange : 1; 
        unsigned int delegateTorchAvailabilityChanged : 1; 
    SBSAccelerometer *_accelerometer;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureSession *_avCaptureSession;
    struct dispatch_queue_s { } *_avCaptureSessionDispatchQueue;
    int _cameraDevice;
    } _cameraFlags;
    int _cameraMode;
    int _cameraOrientation;
    int _captureOrientation;
    int _captureQuality;
    } _cleanAperture;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    <PLCameraControllerDelegate> *_delegate;
    int _flashMode;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    BOOL _hdrEnabled;
    NSTimer *_idleTimerTimer;
    int _imageWriterQueueAvailabilityToken;
    BOOL _imageWriterQueueIsAvailable;
    BOOL _isFocusingOnFace;
    struct CGImage { } *_lastVideoPreviewFrameImageRef;
    BOOL _lockFocusAfterFocusFinishes;
    BOOL _lockFocusLock;
    double _maximumCaptureDuration;
    struct _CAImageQueue { } *_panoramaImageQueue;
    float _panoramaPreviewScale;
    } _panoramaPreviewSize;
    struct OpaqueFigSampleBufferProcessor { } *_panoramaProcessor;
    AVCaptureVideoPreviewLayer *_previewLayer;
    BOOL _shouldBeStopped;
    NSString *_videoCapturePath;
    float _zoomFactor;
    id postSessionSetupBlock;
}

@property(getter=isHDREnabled) BOOL HDREnabled;
@property int cameraDevice;
@property int cameraMode;
@property(readonly) int cameraOrientation;
@property int captureOrientation;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cleanAperture;
@property BOOL convertSampleBufferToJPEG;
@property AVCaptureDevice * currentDevice;
@property AVCaptureDeviceInput * currentInput;
@property AVCaptureOutput * currentOutput;
@property(readonly) AVCaptureSession * currentSession;
@property int flashMode;
@property(readonly) AVCaptureStillImageOutput * imageOutput;
@property BOOL isCameraApp;
@property(readonly) float panoramaPreviewScale;
@property(readonly) struct CGSize { float x1; float x2; } panoramaPreviewSize;
@property(copy) id postSessionSetupBlock;
@property(readonly) AVCaptureVideoPreviewLayer * previewLayer;
@property(readonly) BOOL supportsHDR;
@property float zoomFactor;

+ (id)sharedInstance;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationWilEnterForeground:(id)arg1;
- (void)_autofocus:(BOOL)arg1 autoExpose:(BOOL)arg2;
- (void)_autofocusOperationFinished;
- (void)_callStateDidChange:(id)arg1;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (void)_clearPreviewLayer;
- (void)_commonFocusFinished;
- (void)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (id)_currentVideoConnection;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_destroyCamera;
- (void)_deviceStarted:(id)arg1;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)_didTakePhoto;
- (void)_exposureCompleted;
- (void)_exposureStarted;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_faceRectangleChanged;
- (void)_flashStateChanged;
- (void)_focusCompleted;
- (void)_focusHasChanged:(id)arg1;
- (void)_focusOperationFinished;
- (void)_focusStarted;
- (void)_forceDelaySuspendTimeout;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (BOOL)_isCountingHDREV0Captures;
- (BOOL)_lockCurrentDeviceForConfiguration;
- (void)_lockFocus:(BOOL)arg1 lockExposure:(BOOL)arg2 lockWhiteBalance:(BOOL)arg3;
- (void)_lockedFocusOperationFinished;
- (BOOL)_modeUsesCompassHeading;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (void)_panoramaDidReceiveErrorNotification:(id)arg1;
- (void)_panoramaDidReceiveWarningNotification:(id)arg1;
- (void)_panoramaDidStop;
- (void)_previewStarted:(id)arg1;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (void)_recoverFromServerError;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (void)_resetIdleTimer;
- (void)_sanityCheckCameraMode:(int*)arg1 cameraDevice:(int*)arg2;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (void)_serverDied:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_setCameraOrientation:(int)arg1;
- (void)_setDelaySuspend:(BOOL)arg1;
- (void)_setFlashMode:(int)arg1 force:(BOOL)arg2;
- (void)_setLocationEnabled:(BOOL)arg1;
- (void)_setOrientation;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
- (void)_setVideoCapturePath:(id)arg1;
- (BOOL)_setupCamera;
- (void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2;
- (void)_synchronizeHDRSettings;
- (void)_tearDownCamera;
- (void)_teardownDelaySuspendTimer;
- (void)_torchLevelChanged;
- (void)_unlockCurrentDeviceForConfiguration;
- (void)_updateCallStatus;
- (void)_updateTorchAvailability;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id*)arg2;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (void)_wasInterrupted:(id)arg1;
- (void)_whiteBalanceCompleted;
- (void)_whiteBalanceStarted;
- (void)_willTakePhoto;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)autoExpose;
- (void)autofocus;
- (void)autofocusAfterCapture;
- (int)cameraDevice;
- (int)cameraMode;
- (int)cameraOrientation;
- (BOOL)canCapturePanorama;
- (BOOL)canCapturePhoto;
- (BOOL)canCaptureVideo;
- (BOOL)canFocusAtPoint;
- (BOOL)canLockFocus;
- (int)captureOrientation;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)capturePhoto;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cleanAperture;
- (BOOL)convertSampleBufferToJPEG;
- (id)currentDevice;
- (int)currentFocusMode;
- (id)currentInput;
- (id)currentOutput;
- (id)currentSession;
- (void)dealloc;
- (id)delegate;
- (void)enqueueBlockInCaptureSessionQueue:(id)arg1;
- (void)enqueueBlockOnMainQueue:(id)arg1;
- (void)executeBlockOnMainQueue:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (int)flashMode;
- (BOOL)flashWillFire;
- (void)focusAtAdjustedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)hasFlash;
- (BOOL)hasFrontCamera;
- (id)imageOutput;
- (BOOL)imageWriterQueueIsAvailable;
- (BOOL)inCall;
- (id)init;
- (BOOL)isCameraApp;
- (BOOL)isCapturingPanorama;
- (BOOL)isCapturingVideo;
- (BOOL)isChangingModes;
- (BOOL)isExposing;
- (BOOL)isExposureLockSupported;
- (BOOL)isFocusAllowed;
- (BOOL)isFocusLockSupported;
- (BOOL)isFocusing;
- (BOOL)isFocusingOnFace;
- (BOOL)isHDREnabled;
- (BOOL)isReady;
- (BOOL)isTorchDisabled;
- (BOOL)isTorchOn;
- (void)lockExposure;
- (void)lockFocus;
- (void)lockFocusForRecording;
- (float)maximumZoomFactor;
- (double)minimumVideoCaptureDuration;
- (float)minimumZoomFactor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)panoramaPreviewScale;
- (struct CGSize { float x1; float x2; })panoramaPreviewSize;
- (void)panoramaProcessorOutputCallbackWithStatus:(long)arg1 buffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2;
- (id)postSessionSetupBlock;
- (id)previewLayer;
- (void)restartAutoFocus;
- (void)setCameraDevice:(int)arg1;
- (void)setCameraMode:(int)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setConvertSampleBufferToJPEG:(BOOL)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setCurrentInput:(id)arg1;
- (void)setCurrentOutput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setFocusDisabled:(BOOL)arg1;
- (void)setHDREnabled:(BOOL)arg1;
- (void)setIsCameraApp:(BOOL)arg1;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (void)setPostSessionSetupBlock:(id)arg1;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)startPanoramaCapture;
- (void)startPreview;
- (void)startVideoCapture;
- (void)stopPanoramaCapture;
- (void)stopPreview;
- (void)stopVideoCapture;
- (BOOL)supportsHDR;
- (BOOL)supportsPanorama;
- (BOOL)supportsVideoCapture;
- (BOOL)supportsZoom;
- (void)tearDownCaptureSession;
- (id)videoCapturePath;
- (float)zoomFactor;

@end
