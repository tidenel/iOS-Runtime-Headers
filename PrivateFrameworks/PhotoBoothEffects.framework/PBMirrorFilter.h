/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBMirrorFilter : PBFilter {
    struct CGPoint { 
        float x; 
        float y; 
    float inputOrientation;
    } inputPoint;
}

@property float inputOrientation;
@property struct CGPoint { float x1; float x2; } inputPoint;

- (int (*)())kernelWrapper;
- (const char *)_fragmentShaderSource;
- (id)_glesUniforms;
- (float)inputOrientation;
- (struct CGPoint { float x1; float x2; })inputPoint;
- (unsigned long)kernelArgCount;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 outputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 mirrored:(BOOL)arg4;
- (void)setDefaults;
- (void)setInputOrientation:(float)arg1;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setupKernelArguments:(id)arg1 mirrored:(BOOL)arg2;

@end
