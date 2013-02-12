/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    AVVideoCompositionInstructionInternal *_instruction;
}

@property(retain) struct CGColor { }* backgroundColor;
@property(readonly) BOOL enablePostProcessing;
@property(readonly) NSArray * layerInstructions;
@property(readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (void)initialize;

- (void)_setValuesFromDictionary:(id)arg1;
- (struct CGColor { }*)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enablePostProcessing;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)layerInstructions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (void)setLayerInstructions:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
