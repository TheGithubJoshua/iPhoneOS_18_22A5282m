@class NSArray, MRAVConcreteOutputContext, MROutputContextController, NSString, MROrigin;

@interface MRAVOutputContextEndpoint : MRAVEndpoint <NSSecureCoding> {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) MRAVConcreteOutputContext *outputContext;
@property (retain, nonatomic) MROutputContextController *outputContextController;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic, getter=isRealized) BOOL realized;

- (id)initWithCoder:(id)a0;
- (id)predictedOutputDevice;
- (BOOL)isProxyGroupPlayer;
- (void)_adjustOutputDeviceVolume:(long long)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)_externalOutputContext;
- (id)initWithOutputContext:(id)a0 uniqueIdentifier:(id)a1;
- (id)personalOutputDevices;
- (BOOL)canModifyGroupMembership;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (id)designatedGroupLeader;
- (void)_setOutputDeviceIsMuted:(BOOL)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)removeOutputDeviceFromParentGroup:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)resetPredictedOutputDevice;
- (BOOL)isConnected;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (void)outputContextDataSourceReloaded:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)dealloc;
- (void)_setOutputDeviceVolume:(float)a0 outputDevice:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (long long)connectionType;
- (void)connectToExternalDeviceWithOptions:(unsigned int)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withReplyQueue:(id)a2 completion:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withReplyQueue:(id)a3 completion:(id /* block */)a4;

@end
