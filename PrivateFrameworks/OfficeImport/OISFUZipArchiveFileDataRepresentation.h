//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

#import <OfficeImport/SFUZipArchiveDataRepresentation-Protocol.h>

@class NSString, OISFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)path;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (_Bool)isEncrypted;
- (long long)dataLength;
- (_Bool)isReadable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

