/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <ISOperationDelegate>, ISOperation, NSArray, NSError, NSLock, NSRunLoop, NSString, SSOperationProgress;

@interface ISOperation : NSOperation {
    <ISOperationDelegate> *_delegate;
    NSError *_error;
    NSLock *_lock;
    NSRunLoop *_operationRunLoop;
    ISOperation *_parentOperation;
    NSString *_powerAssertionIdentifier;
    SSOperationProgress *_progress;
    NSArray *_serializationLockIdentifiers;
    BOOL _shouldMessageMainThread;
    BOOL _shouldRunWithBackgroundPriority;
    ISOperation *_subOperation;
    BOOL _success;
    id _threadSafeDelegate;
}

@property <ISOperationDelegate> * delegate;
@property(retain) NSError * error;
@property(retain) NSRunLoop * operationRunLoop;
@property(retain) ISOperation * parentOperation;
@property(retain) NSString * powerAssertionIdentifier;
@property(readonly) SSOperationProgress * progress;
@property(readonly) int progressWeight;
@property(copy) NSArray * serializationLockIdentifiers;
@property BOOL shouldMessageMainThread;
@property BOOL shouldRunWithBackgroundPriority;
@property(retain) ISOperation * subOperation;
@property BOOL success;
@property(readonly) id threadSafeDelegate;
@property(readonly) NSString * uniqueKey;

- (void)_dispatchCompletionBlock;
- (void)_failAfterException;
- (void)_main:(BOOL)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_sendSuccessToDelegate;
- (void)_sendWillStartToDelegate;
- (id)authenticatedAccountDSID;
- (void)cancel;
- (BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3;
- (id)copyActivePowerAssertionIdentifiers;
- (id)copySerializationLocks;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)init;
- (BOOL)loadSoftwareMapReturningError:(id*)arg1;
- (BOOL)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2;
- (void)lock;
- (void)main;
- (id)operationRunLoop;
- (id)parentOperation;
- (id)powerAssertionIdentifier;
- (id)progress;
- (int)progressWeight;
- (void)run:(BOOL)arg1;
- (void)run;
- (long)runRunLoopUntilStopped;
- (BOOL)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id*)arg3;
- (BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2;
- (void)sendCompletionCallback:(id)arg1;
- (void)sendDidTakeSerializationLocks;
- (void)sendProgressToDelegate;
- (id)serializationLockIdentifiers;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOperationRunLoop:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setPowerAssertionIdentifier:(id)arg1;
- (void)setScriptOptions:(id)arg1;
- (void)setSerializationLockIdentifiers:(id)arg1;
- (void)setShouldMessageMainThread:(BOOL)arg1;
- (void)setShouldRunWithBackgroundPriority:(BOOL)arg1;
- (void)setSubOperation:(id)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)shouldFailAfterUniquePredecessorError:(id)arg1;
- (BOOL)shouldMessageMainThread;
- (BOOL)shouldRunWithBackgroundPriority;
- (void)stopRunLoop;
- (id)subOperation;
- (BOOL)success;
- (id)threadSafeDelegate;
- (id)uniqueKey;
- (void)unlock;

@end
