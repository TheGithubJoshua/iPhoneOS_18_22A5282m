@class NSString, NSURL;

@interface ATXHomeScreenWebClip : NSObject <ATXHomeScreenLeafIconRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 url:(id)a2;
- (BOOL)isEqualToATXHomeScreenWebClip:(id)a0;

@end
