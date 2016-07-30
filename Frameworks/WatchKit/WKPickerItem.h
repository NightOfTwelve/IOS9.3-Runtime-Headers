//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/NSSecureCoding-Protocol.h>

@class NSString, WKImage;

@interface WKPickerItem : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_caption;
    WKImage *_accessoryImage;
    WKImage *_contentImage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) WKImage *contentImage; // @synthesize contentImage=_contentImage;
@property(copy, nonatomic) WKImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

