@class NSObject;
@protocol OS_xpc_object;

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_endpoint;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)_initWithConnection:(id)a0;
- (id)_endpoint;
- (void)_setEndpoint:(id)a0;

@end
