@class NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *sceneEndpoint;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
