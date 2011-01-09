/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface ITDBExtrasDatabase : NSObject 
{

  /* Error parsing encoded ivar type info: ^{CPSqliteDatabase=^{__CFString}^{CPSqliteConnection}^?^?^v^?^?B^vi{$_159="checkVersion"b1"checkedJournalPermissions"b1"propertiesDisabled"b1}} */
    struct CPSqliteDatabase { struct __CFString {} *x1; struct CPSqliteConnection {} *x2; int (*x3)(); int (*x4)(); void *x5; int (*x6)(); int (*x7)(); /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; void *x9; NSInteger x10; struct $_159 { 
            unsigned int checkVersion : 1; 
            unsigned int checkedJournalPermissions : 1; 
            unsigned int propertiesDisabled : 1; 
        } x11; } *_db;

    struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; } *_dbrc;
    double _connectionFailedTime;
    unsigned int _hasGeniusSchema : 1;
    unsigned int _hasGeniusSchemaCached : 1;
}

+ (id)defaultExtrasFilePath;
+ (id)fallbackExtrasFilePath;
+ (id)sharedExtrasDatabase;

- (id)init;
- (struct CPSqliteDatabase { struct __CFString {} *x1; struct CPSqliteConnection {} *x2; int (*x3)(); int (*x4)(); void *x5; int (*x6)(); int (*x7)(); /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; void *x9; NSInteger x10; struct $_159 { unsigned int x_11_1_1 : 1; unsigned int x_11_1_2 : 1; unsigned int x_11_1_3 : 1; } x11; }*)_loadedDatabaseAtPath:(id)arg1;
     /* Encoded args for previous method: ^{CPSqliteDatabase=^{__CFString}^{CPSqliteConnection}^?^?^v^?^?B^vi{$_159=b1b1b1}}12@0:4@8 */

- (void)beginTransaction;
- (void)endTransaction;
- (void)_connect;
- (NSUInteger)_getCountOfResultsInTable:(id)arg1 where:(id)arg2 limit:(NSUInteger)arg3;
- (BOOL)_schemaHasDefinedTable:(id)arg1;
- (NSUInteger)_getInt32ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(NSUInteger)arg4;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(NSUInteger)arg4;
- (BOOL)_copyBlobData:(id*)arg1 blobAllocType:(NSInteger)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5 limit:(NSUInteger)arg6 sqliteStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg7;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3 limit:(NSUInteger)arg4 sqliteStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg5;
- (BOOL)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4 limit:(NSUInteger)arg5 sqliteStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg6;
- (BOOL)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (BOOL)hasDatabase;
- (BOOL)hasGeniusDataAvailable;
- (BOOL)hasGeniusCapableiTunes;
- (BOOL)hasGeniusFeatureEnabled;
- (id)copyGeniusConfigrationDataAndBytes;
- (NSUInteger)geniusConfigurationVersion;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)_cachedStatementForReading:(id)arg1;
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;

@end