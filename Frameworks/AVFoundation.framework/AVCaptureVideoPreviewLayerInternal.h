/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSession, CALayer, NSMutableArray, NSString;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    BOOL automaticallyAdjustsMirroring;
    BOOL chromaNoiseReductionEnabled;
    NSMutableArray *connections;
    BOOL disableActions;
    NSString *gravity;
    BOOL isPaused;
    BOOL isPresentationLayer;
    BOOL mirrored;
    int orientation;
    float previewRotationDegrees;
    } previewSize;
    AVCaptureSession *session;
    CALayer *sublayer;
    BOOL visible;
}

@end
