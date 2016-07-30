//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface SGSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    int _transactionDepth;
    _Bool _transactionRolledback;
    NSString *_filename;
    NSCache *_queryCache;
    NSHashTable *_weakQueries;
    NSObject<OS_dispatch_queue> *_queue;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_threadInQueue;
    _Bool _currentExclusivity;
    _Bool _isInMemory;
}

+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nscoding:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt *)arg1 name:(const char *)arg2;
+ (void)truncateDatabaseAtPath:(id)arg1;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)corruptionMarkerFilename;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)inMemoryPath;
+ (_Bool)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isInMemory; // @synthesize isInMemory=_isInMemory;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)languageForFTSTable:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (_Bool)hasIndexNamed:(id)arg1;
- (_Bool)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (id)tablesWithColumnNamed:(id)arg1;
- (_Bool)hasTableNamed:(id)arg1;
- (void)setUserVersion:(unsigned long long)arg1;
- (unsigned long long)userVersion;
- (_Bool)createSnapshot:(id)arg1;
- (id)description;
- (_Bool)_transactionWithExclusivity:(_Bool)arg1 transaction:(CDUnknownBlockType)arg2;
- (_Bool)frailReadTransaction:(CDUnknownBlockType)arg1;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (_Bool)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (void)writeTransaction:(CDUnknownBlockType)arg1;
- (void)clearCaches;
- (_Bool)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)errorMessage:(int)arg1 forQuery:(id)arg2;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (void)placeCorruptionMarker;
- (id)corruptionMarkerPath;
- (void)simulateOnDiskDatabase;
- (void)closePermanently;
- (void)dealloc;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;

@end

