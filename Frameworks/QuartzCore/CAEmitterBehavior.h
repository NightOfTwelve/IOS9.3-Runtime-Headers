//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSCoding-Protocol.h>

@class NSString;

@interface CAEmitterBehavior : NSObject <NSCoding>
{
    unsigned int _type;
    NSString *_name;
    void *_attr;
    void *_cache;
    unsigned int _flags;
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)behaviorWithType:(id)arg1;
+ (id)behaviorTypes;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
@property(getter=isEnabled) _Bool enabled;
@property(copy) NSString *name;
@property(readonly) NSString *type;
- (id)initWithType:(id)arg1;

@end

