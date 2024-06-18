@class NSUUID, _EXSceneSessionParameters, NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property (retain) NSXPCListenerEndpoint *hostEndpoint;
@property (retain) _EXSceneSessionParameters *parameters;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
