//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCXReader.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EXReader : OCXReader
{
    NSString *mTemporaryDirectory;
}

@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
- (id)defaultPassphrase;
- (id)read;
- (void)dealloc;

@end

