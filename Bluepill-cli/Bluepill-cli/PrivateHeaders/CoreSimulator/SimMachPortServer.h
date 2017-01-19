//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSMachPort, NSObject, NSString;

@interface SimMachPortServer : NSObject
{
    NSMachPort *_port;
    NSString *_name;
    NSObject *_serverQueue;
    NSObject *_serverSource;
}

@property(retain, nonatomic) NSObject *serverSource; // @synthesize serverSource=_serverSource;
@property(retain, nonatomic) NSObject *serverQueue; // @synthesize serverQueue=_serverQueue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSMachPort *port; // @synthesize port=_port;
//- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 machMessageHandler:(const CDUnknownFunctionPointerType)arg2 machMessageSize:(unsigned int)arg3 error:(id *)arg4;

@end

