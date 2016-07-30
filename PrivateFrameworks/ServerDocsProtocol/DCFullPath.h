//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DCService, NSData, NSString, NSURL;

@interface DCFullPath : NSObject
{
    DCService *_service;
    NSString *_string;
}

+ (id)metadataRootForService:(id)arg1;
+ (id)documentRootForService:(id)arg1;
+ (id)_fullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3;
+ (id)fullPathWithString:(id)arg1 forService:(id)arg2;
+ (id)_uploadDirectoryNameWithParentRelativePath:(id)arg1;
+ (id)uploadFullPathWithParentRelativePath:(id)arg1 name:(id)arg2;
+ (id)metadataFullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3;
+ (id)fullPathWithDocumentIdentifier:(id)arg1 relativePath:(id)arg2;
+ (id)_fullPathWithRoot:(id)arg1 documentIdentifier:(id)arg2 name:(id)arg3 forService:(id)arg4;
+ (id)fullPathWithString:(id)arg1 relativePath:(id)arg2;
+ (id)_fullPathWithString:(id)arg1 forService:(id)arg2;
@property(readonly, retain) NSString *string; // @synthesize string=_string;
@property(readonly, retain) DCService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly, retain) NSData *documentIdentifier;
@property(readonly, retain) NSURL *url;

@end

