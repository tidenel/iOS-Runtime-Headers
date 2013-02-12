/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileAccessNode, NSMapTable, NSString;

@interface NSFileAccessNode : NSObject {
    id _accessClaimOrClaims;
    NSMapTable *_childrenByNormalizedName;
    BOOL _isArbitrationBoundary;
    BOOL _isFilePackage;
    BOOL _isFilePackageIsFigured;
    NSFileAccessNode *_lastRequestedChild;
    NSString *_lastRequestedChildName;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_parent;
    id _presenterOrPresenters;
    id _provider;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned int _symbolicLinkReferenceCount;
}

- (void)addAccessClaim:(id)arg1;
- (void)addPresenter:(id)arg1;
- (void)assertDead;
- (void)assertDescendantsLive;
- (void)assertLive;
- (id)biggestFilePackageLocation;
- (id)childForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ofPath:(id)arg2;
- (void)dealloc;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 create:(BOOL)arg3;
- (id)descendantForFileURL:(id)arg1;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachAccessClaimOnItemPerformProcedure:(id)arg1;
- (void)forEachDescendantPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemPerformProcedure:(id)arg1;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachRelevantAccessClaimPerformProcedure:(id)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;
- (BOOL)isFilePackage;
- (BOOL)itemIsInItemAtLocation:(id)arg1;
- (BOOL)itemIsItemAtLocation:(id)arg1;
- (BOOL)itemIsSubarbitrable;
- (id)itemProvider;
- (id)pathExceptPrivate;
- (id)pathFromAncestor:(id)arg1;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)removeAccessClaim:(id)arg1;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)removeSelfIfUseless;
- (void)setArbitrationBoundary;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (void)setParent:(id)arg1 name:(id)arg2;
- (void)setProvider:(id)arg1;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)standardizedURL;
- (id)url;

@end
