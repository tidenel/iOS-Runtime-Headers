/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSNumber;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding> {
    unsigned int _hash;
    NSDictionary *_kv;
    NSNumber *_sum;
}

@property(readonly) unsigned int hash;
@property(readonly) unsigned int length;
@property(readonly) NSNumber * sum;

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;

- (void)_updateHash;
- (void)_updateSum;
- (id)allPeerIDs;
- (BOOL)canMergeWithKnowledgeVector:(id)arg1;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)initWithPeerStatesFromStoreMetadata:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (BOOL)isAncestorOfKnowledgeVector:(id)arg1;
- (BOOL)isDescendantOfKnowledgeVector:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isZeroVector;
- (unsigned int)length;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)sum;
- (id)transactionNumberForPeerID:(id)arg1;

@end
