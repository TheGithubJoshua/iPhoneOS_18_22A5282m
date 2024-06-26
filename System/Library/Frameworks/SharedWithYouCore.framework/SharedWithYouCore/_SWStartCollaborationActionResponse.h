@class NSURL, _SWCollaborationMetadata, SWCollaborationMetadata;

@interface _SWStartCollaborationActionResponse : _SWActionResponse <NSSecureCoding, NSCopying> {
    SWCollaborationMetadata *_updatedMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) _SWCollaborationMetadata *updatedMetadata;

+ (id)responseWithURL:(id)a0 updatedMetadata:(id)a1;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToActionResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSActionResponseSettings:(id)a0;
- (id)initWithDestinationResponse:(id)a0;
- (id)initWithURL:(id)a0 updatedMetadata:(id)a1;

@end
