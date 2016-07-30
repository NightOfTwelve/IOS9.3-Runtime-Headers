//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CKArchivedAnchoredPackage : NSObject <NSSecureCoding>
{
    NSString *_anchorPath;
    NSString *_packagePath;
    NSString *_UUID;
    NSArray *_assets;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
@property(retain, nonatomic) NSString *anchorPath; // @synthesize anchorPath=_anchorPath;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCKPackage:(id)arg1;

@end

