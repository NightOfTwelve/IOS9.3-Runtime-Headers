//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSDGLFrameBufferTextureLookupInfo : NSObject
{
    unsigned int _attachment;
    unsigned int _name;
    long long _index;
}

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 index:(long long)arg2 name:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int name; // @synthesize name=_name;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
- (id)initWithAttachment:(unsigned int)arg1 index:(long long)arg2 name:(unsigned int)arg3;

@end

