//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSString;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>
{
    _Bool _shouldMoveFile;
    NSString *_originalFilename;
    NSString *_uniformTypeIdentifier;
}

@property(nonatomic) _Bool shouldMoveFile; // @synthesize shouldMoveFile=_shouldMoveFile;
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end

