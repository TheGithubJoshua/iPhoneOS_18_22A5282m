@class NSString;

@interface SLFetchShareableContentAction : SLShareableContentAction

@property (readonly, copy, nonatomic) NSString *requestedTypeIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 responseHandler:(id /* block */)a2;

@end
