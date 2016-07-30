//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Symbolication/VMULibraryLoadDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString, _VMULibraryLoadObserver;

@interface VMUProcessDescription : NSObject <VMULibraryLoadDelegate>
{
    unsigned int _task;
    int _pid;
    NSString *_hardwareModel;
    NSString *_processName;
    _Bool _processNameNeedsCorrection;
    NSString *_executablePath;
    _VMULibraryLoadObserver *_loadUnloadObserver;
    _Bool _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    _Bool _is64Bit;
    struct timeval _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    _Bool _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
}

+ (id)parseBinaryImagesDescription:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)analysisToolDescription;
- (id)dateAndVersionDescription;
- (id)processDescriptionHeader;
- (id)_systemVersionDescription;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_cpuTypeDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)_bundleLock;
- (_Bool)isAppleApplication;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)processVersion;
- (id)_sanitizeVersion:(id)arg1;
- (id)processVersionDictionary;
- (id)parentProcessName;
- (id)displayName;
- (id)processIdentifier;
- (id)processName;
- (int)cpuType;
- (int)pid;
- (unsigned int)task;
- (id)date;
- (void)_libraryLoaded:(struct _CSTypeRef)arg1;
- (void)_extractCrashReporterBinaryImageHintsFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_readDataFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)_readStringFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2;
- (double)_extractDyldInfoFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2 getBinariesList:(_Bool)arg3;
- (void)clearCrashReporterInfo;
- (void)setCrashReporterInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

