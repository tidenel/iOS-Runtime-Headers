/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface CFXPreferencesSource : NSObject 
{
    struct __CFDictionary { } *_dict;
    NSInteger _generationCount;
    BOOL _disabled;
}


- (id)init;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (unsigned char)synchronize;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFDictionary { }*)copyDictionary;
- (long)generationCount;
- (void)dealloc;
- (void)finalize;

@end