//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSEntityValueProvider-Protocol.h>

@protocol IKEntityValueProviding;

@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider>
{
    id <IKEntityValueProviding> _entityValueProvider;
}

@property(retain, nonatomic) id <IKEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
- (void).cxx_destruct;
- (id)_valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;

@end

