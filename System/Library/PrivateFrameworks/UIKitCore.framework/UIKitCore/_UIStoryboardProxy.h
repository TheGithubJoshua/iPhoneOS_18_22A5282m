@class UIStoryboard;

@interface _UIStoryboardProxy : NSObject <NSSecureCoding> {
    UIStoryboard *_storyboard;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithStoryboard:(id)a0;

@end
