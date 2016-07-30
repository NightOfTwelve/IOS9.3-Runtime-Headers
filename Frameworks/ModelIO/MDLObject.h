//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class NSMapTable, NSString;
@protocol MDLObjectContainerComponent, MDLTransformComponent;

@interface MDLObject : NSObject <MDLNamed>
{
    MDLObject *_parent;
    NSMapTable *_components;
    NSString *name;
    id <MDLObjectContainerComponent> _children;
}

@property(retain, nonatomic) id <MDLObjectContainerComponent> children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (struct)boundingBoxAtTime:(double)arg1;
- (void)addChild:(id)arg1;
@property(retain, nonatomic) id <MDLTransformComponent> transform;
@property(nonatomic) __weak MDLObject *parent;
- (id)componentConformingToProtocol:(id)arg1;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (id)init;

@end

