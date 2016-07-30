//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TSPDatabase, TSPDistributableFileManager;

__attribute__((visibility("hidden")))
@interface TSPDatabaseArchiverWriter : NSObject
{
    long long _dataStateIdentifier;
    NSString *_fileStateIdentifier;
    _Bool _hasDataState;
    _Bool _hasFileState;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    NSString *_filenameHint;
    _Bool _forceFileStorage;
}

@property(nonatomic) _Bool forceFileStorage; // @synthesize forceFileStorage=_forceFileStorage;
@property(retain, nonatomic) NSString *filenameHint; // @synthesize filenameHint=_filenameHint;
@property(readonly, nonatomic) _Bool hasFileState; // @synthesize hasFileState=_hasFileState;
@property(readonly, nonatomic) _Bool hasDataState; // @synthesize hasDataState=_hasDataState;
- (void).cxx_destruct;
- (void)_writeDataFromInputStreamToFile:(id)arg1 length:(long long)arg2;
- (void)_writeDataFromInputStreamToDatabase:(id)arg1 length:(int)arg2;
- (struct sqlite3_blob *)_openDatabaseBlobWithSize:(int)arg1;
- (void)serializeDataFromStream:(id)arg1 length:(long long)arg2;
@property(retain, nonatomic) NSString *fileStateIdentifier;
@property(nonatomic) long long dataStateIdentifier;
- (_Bool)serializeArchive:(const struct Message *)arg1;
- (id)initWithDatabase:(id)arg1 fileManager:(id)arg2;

@end

