/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, MFLock, MailboxUid, MessageLibrary, NSMutableDictionary, NSString;

@interface MailAccount : Account {
    struct { 
        unsigned int cacheDirtyCount : 16; 
        unsigned int synchronizationThreadIsRunning : 1; 
        unsigned int backgroundFetchInProgress : 1; 
        unsigned int cacheHasBeenRead : 1; 
        unsigned int disableCacheWrite : 1; 
        unsigned int _UNUSED_ : 12; 
    MailboxUid *_archiveMailboxUid;
    int _cachedLibraryID;
    MFLock *_cachedLibraryIDLock;
    MFLock *_cachedMailboxenLock;
    struct __CFDictionary { } *_cachedMessageStores;
    MFLock *_cachedMessageStoresLock;
    NSMutableDictionary *_currentChokedActions;
    MailboxUid *_draftsMailboxUid;
    } _flags;
    MailboxUid *_inboxMailboxUid;
    MFError *_lastConnectionError;
    MessageLibrary *_library;
    NSString *_mailboxCachePath;
    NSString *_nonPersistentPath;
    NSString *_path;
    MailboxUid *_rootMailboxUid;
    MailboxUid *_sentMessagesMailboxUid;
    MailboxUid *_trashMailboxUid;
}

@property BOOL generatesBulletins;
@property BOOL shouldArchive;

+ (id)URLForInfo:(id)arg1;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id*)arg2 fullUserName:(id*)arg3 includingInactive:(BOOL)arg4;
+ (id)_accountForURL:(id)arg1;
+ (id)_accountWithPath:(id)arg1;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (id)_defaultMailAccountForDeliveryIncludingRestricted:(BOOL)arg1;
+ (void)_invalidateAccounts:(id)arg1 missingFromNewAccounts:(id)arg2;
+ (id)_loadAllAccounts;
+ (void)_migrateUserInfoAddressPreferencesToFirstAccount;
+ (void)_postMailAccountsHaveChanged;
+ (void)_registerPendingAccount:(id)arg1;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (void)_removeLookAsideValuesNotInAccountList:(id)arg1;
+ (void)_setOnlineStateOfAllAccountsTo:(BOOL)arg1;
+ (void)_setOutboxMailboxUid:(id)arg1;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (void)_unregisterPendingAccount:(id)arg1;
+ (id)accountContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2 includingInactive:(BOOL)arg3;
+ (id)accountThatMessageIsFrom:(id)arg1 includingInactive:(BOOL)arg2;
+ (id)accountThatMessageIsFrom:(id)arg1;
+ (id)accountUsingHeadersFromMessage:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (id)accountWithURLString:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)activeAccounts;
+ (void)addMailAccount:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)allEmailAddressesIncludingFullUserName:(BOOL)arg1 includeReceiveAliases:(BOOL)arg2;
+ (id)allMailboxUids;
+ (BOOL)canMoveMessagesFromAccount:(id)arg1 toAccount:(id)arg2;
+ (void)connectAllAccounts;
+ (id)defaultAccountDirectory;
+ (id)defaultDeliveryAccount;
+ (id)defaultMailAccountForDelivery;
+ (id)defaultMailAccountForDeliveryExcludingRestricted;
+ (id)defaultPathForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (void)disableMailboxListingNotifications;
+ (void)disconnectAllAccounts;
+ (void)enableMailboxListingNotifications:(BOOL)arg1;
+ (id)existingAccountWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)existingDAMailAccountForDAAccount:(id)arg1;
+ (id)existingMailAccountForUniqueID:(id)arg1;
+ (BOOL)getConfigurationFromServerForEmail:(id)arg1;
+ (BOOL)haveAccountsBeenConfigured;
+ (id)infoForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)isAnyAccountOffline;
+ (BOOL)isAnyAccountOnline;
+ (BOOL)isPredefinedAccountType;
+ (id)mailAccounts;
+ (BOOL)mailboxListingNotificationAreEnabled;
+ (id)mailboxUidForFileSystemPath:(id)arg1 create:(BOOL)arg2;
+ (id)mailboxUidFromActiveAccountsForURL:(id)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)newAccountWithPath:(id)arg1;
+ (id)outboxMailboxUid;
+ (id)outboxMessageStore:(BOOL)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (void)reloadAccounts;
+ (void)removeMailAccount:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)removeOrphanedAccountData;
+ (void)resetMailboxTimers;
+ (void)saveAccountInfoToDefaults;
+ (void)saveAccounts:(id)arg1 usingKey:(id)arg2;
+ (void)saveStateForAllAccounts;
+ (void)setDataclassesConsideredActive:(id)arg1;
+ (void)setGlobalPathForAccounts:(id)arg1;
+ (void)setMailAccounts:(id)arg1 saveIfChanged:(BOOL)arg2;
+ (void)setMailAccounts:(id)arg1;
+ (id)standardAccountClass:(Class)arg1 valueForKey:(id)arg2;
+ (void)synchronouslyEmptyMailboxUidType:(int)arg1 inAccounts:(id)arg2;
+ (void)updateAutoFetchSettings;
+ (void)updateEmailALiasesForActiveAccounts;
+ (BOOL)usernameIsEmailAddress;

- (id)URLForMessage:(id)arg1;
- (id)URLString;
- (id)_URLForInfo:(id)arg1;
- (id)_URLScheme;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2 delete:(BOOL)arg3;
- (void)_backgroundFetchCompleted;
- (void)_backgroundFetchCompletedCount:(unsigned int)arg1;
- (id)_cachedSpecialMailboxOfType:(int)arg1;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (BOOL)_canReceiveNewMailNotifications;
- (id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2;
- (BOOL)_cleanInboxDuplication:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)_deleteHook;
- (BOOL)_deleteMailbox:(id)arg1;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (int)_emptyFrequencyForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_infoForMatchingURL:(id)arg1;
- (void)_invalidateCachedMailboxen;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (BOOL)_loadMailboxListingIntoCache:(id)arg1 attributes:(unsigned int)arg2 children:(id)arg3 parent:(id)arg4;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (id)_mailboxPathPrefix;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (id)_pathComponentForUidName:(id)arg1;
- (void)_postMailAccountsHaveChangedIfNeeded;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)_resetAllMailboxURLs:(BOOL)arg1;
- (BOOL)_resetSpecialMailboxes;
- (void)_setAccountProperties:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (void)_setEmptyFrequency:(int)arg1 forKey:(id)arg2;
- (BOOL)_setPath:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (void)_setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2 subKey:(id)arg3;
- (BOOL)_shouldLogDeleteActivity;
- (id*)_specialMailboxIvarOfType:(int)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)_synchronouslyInvalidateAndDelete:(unsigned int)arg1;
- (void)_synchronouslyInvalidateAndDeleteWrapper:(id)arg1;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (BOOL)_usesMailboxCache;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_writeMailboxCacheWithPrejudice:(BOOL)arg1;
- (void)accountDidLoad;
- (void)addUserFocusMailbox:(id)arg1;
- (id)allMailboxUids;
- (int)archiveDestinationForMailbox:(id)arg1;
- (BOOL)archiveSentMessages;
- (BOOL)areAnyDataclassesConsideredActiveEnabled;
- (int)cachePolicy;
- (BOOL)canAppendMessages;
- (BOOL)canArchiveForMailbox:(id)arg1;
- (BOOL)canBeSynchronized;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canFetch;
- (BOOL)canFetchMessagesByNumericRange;
- (BOOL)canForwardWithoutDownload;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canUseCarrierDeliveryFallback;
- (BOOL)canUseDeliveryAccount:(id)arg1;
- (id)connectionError;
- (BOOL)containsMailboxes;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)deleteAccount;
- (id)deleteAccountWithOptions:(unsigned int)arg1;
- (BOOL)deleteInPlaceForAllMailboxes;
- (BOOL)deleteInPlaceForMailbox:(id)arg1;
- (BOOL)deleteMailbox:(id)arg1;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(unsigned int)arg2;
- (id)deliveryAccount;
- (id)deliveryAccountAlternates;
- (void)deliveryAccountWillBeRemoved:(id)arg1;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)description;
- (void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3;
- (id)displayName;
- (id)displayNameForMailboxUid:(id)arg1;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1;
- (id)displayUsername;
- (id)emailAddresses;
- (id)emailAddressesAndAliases;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (void)emptyTrash;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (void)fetchMailboxList;
- (id)firstEmailAddress;
- (id)fromEmailAddresses;
- (id)fullUserName;
- (BOOL)generatesBulletins;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)hasUnreadMail;
- (id)iconString;
- (id)initWithLibrary:(id)arg1 path:(id)arg2;
- (id)initWithLibrary:(id)arg1 properties:(id)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (void)invalidate;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (BOOL)isFetching;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (BOOL)isUsernameEquivalentTo:(id)arg1;
- (BOOL)isValidAccountWithError:(id)arg1 accountBeingEdited:(id)arg2 userCanOverride:(BOOL*)arg3;
- (id)lastEmailAliasesSyncDate;
- (id)library;
- (int)libraryID;
- (id)mailboxCachePath;
- (id)mailboxPathExtension;
- (id)mailboxUidForInfo:(id)arg1;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (id)mailboxUidForURL:(id)arg1;
- (id)mailboxUidOfType:(int)arg1 createIfNeeded:(BOOL)arg2;
- (id)meetingStorePersistentID;
- (BOOL)moveMailbox:(id)arg1 intoParent:(id)arg2;
- (BOOL)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 unsuccessfulOnes:(id)arg5;
- (void)newMailHasBeenReceived;
- (BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2;
- (id)newMailboxWithParent:(id)arg1 name:(id)arg2;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (id)path;
- (void)postUserInfoHasChangedForMailboxUid:(id)arg1 userInfo:(id)arg2;
- (id)primaryMailboxUid;
- (id)pushedMailboxUids;
- (id)receiveEmailAliasAddresses;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)removeUserFocusMailbox:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2;
- (void)resetMailboxTimer;
- (void)resetMailboxURLs;
- (void)resetSpecialMailboxes;
- (BOOL)restrictedFromSendingExternally;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (id)rootMailboxUid;
- (id)saveSentFolder;
- (void)saveState;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (BOOL)secureMIMEEnabled;
- (void)setCachePolicy:(int)arg1;
- (void)setCanUseCarrierDeliveryFallback:(BOOL)arg1;
- (void)setConnectionError:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (void)setDeliveryAccountAlternates:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmptyFrequency:(int)arg1 forMailboxType:(int)arg2;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setFullUserName:(id)arg1;
- (void)setGeneratesBulletins:(BOOL)arg1;
- (void)setHostname:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (void)setLastEmailAliasesSyncDate:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMailboxCachePath:(id)arg1;
- (void)setMailboxUid:(id)arg1 forMailboxType:(int)arg2;
- (void)setPath:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setReceiveEmailAliasAddresses:(id)arg1;
- (void)setShouldArchive:(BOOL)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (void)setUnreadCount:(unsigned int)arg1 forMailbox:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setValueInAccountLookAsideProperties:(id)arg1 forKey:(id)arg2;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)setupLibrary;
- (BOOL)shouldAppearInMailSettings;
- (BOOL)shouldArchive;
- (BOOL)shouldExpungeMessagesOnDelete;
- (BOOL)shouldFetchBodiesWhenMovingToTrash;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (BOOL)shouldWipeLocalStorageOnRebuild;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (id)specialMailboxNameForType:(int)arg1;
- (void)startListeningForNotifications;
- (void)stopListeningForNotifications;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)arg1;
- (id)storeForMailboxUid:(id)arg1;
- (BOOL)supportsAppend;
- (BOOL)supportsArchiving;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsMessageFlagging;
- (BOOL)supportsRemoteAppend;
- (void)systemDidWake;
- (void)systemWillSleep;
- (id)tildeAbbreviatedPath;
- (id)transferDisabledMailboxUids;
- (void)transferNotificationSessionToAccount:(id)arg1;
- (id)uniqueIdForPersistentConnection;
- (void)unregisterStore:(id)arg1 forUid:(id)arg2;
- (BOOL)updateEmailAliases;
- (id)valueInAccountLookAsidePropertiesForKey:(id)arg1;
- (BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3;

@end
