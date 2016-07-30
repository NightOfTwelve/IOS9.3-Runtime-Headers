//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;

__attribute__((visibility("hidden")))
@interface TSPDistributableArchive : NSObject
{
    struct map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long>>>> *_entries;
    SFUFileDataRepresentation *_archiveFileRep;
    SFUMemoryDataRepresentation *_archiveMemoryRep;
    SFUZipEntry *_archiveZipEntryRep;
    struct {
        unsigned long long version;
        unsigned long long compatibleVersion;
    } _archivedVersions;
}

+ (id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long long)arg2;
+ (_Bool)_checkFileHeader:(const char *)arg1 length:(unsigned long long)arg2 dffVersion:(unsigned short *)arg3 archivedVersions:(CDStruct_4bcfbbae *)arg4 defaultObjectVersion:(unsigned int *)arg5 hasDescriptors:(_Bool *)arg6 hasToc:(_Bool *)arg7 otherDataLength:(unsigned int *)arg8 closedCleanly:(_Bool *)arg9;
+ (void)cancelStreaming;
+ (_Bool)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(_Bool *)arg5 context:(id)arg6 error:(id *)arg7;
+ (_Bool)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int *)arg2 error:(id *)arg3;
+ (_Bool)readArchivedVersionsFromStream:(id)arg1 versions:(CDStruct_4bcfbbae *)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (_Bool)_readEntriesFromToc:(id)arg1 error:(id *)arg2;
- (_Bool)containsObjectWithIdentifier:(long long)arg1;
- (long long)lengthOfObject:(long long)arg1;
- (id)createStreamForObject:(long long)arg1 length:(long long *)arg2;
- (CDStruct_4bcfbbae)archivedVersions;
- (void)dealloc;
- (id)initWithDffData:(id)arg1 error:(id *)arg2;

@end

