//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPDocumentResourceDataStorage.h>

__attribute__((visibility("hidden")))
@interface TSPApplicationDataStorage : TSPDocumentResourceDataStorage
{
    _Bool _isValidated;
}

- (void)validateIfNeeded;
- (id)fileURLForInfo:(id)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
- (_Bool)isReadable;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(_Bool)arg3;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2;

@end

