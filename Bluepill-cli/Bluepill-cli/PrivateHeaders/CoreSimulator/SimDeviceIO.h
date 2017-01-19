//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

#import "SimDeviceIOInterface-Protocol.h"
#import "SimDeviceIOProtocol-Protocol.h"

@class NSString, SimDevice;

@interface SimDeviceIO : NSObject <SimDeviceIOInterface, SimDeviceIOProtocol>
{
    SimDevice *_device;
}

+ (id)ioForSimDevice:(id)arg1;
@property(nonatomic) __weak SimDevice *device; // @synthesize device=_device;
//- (void).cxx_destruct;
- (void)detachConsumer:(id)arg1 fromPort:(id)arg2;
- (void)attachConsumer:(id)arg1 toPort:(id)arg2;
- (BOOL)unregisterService:(id)arg1 error:(id *)arg2;
- (BOOL)registerPort:(unsigned int)arg1 service:(id)arg2 error:(id *)arg3;
- (id)ioPortForUUID:(id)arg1;
- (id)ioPorts;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

