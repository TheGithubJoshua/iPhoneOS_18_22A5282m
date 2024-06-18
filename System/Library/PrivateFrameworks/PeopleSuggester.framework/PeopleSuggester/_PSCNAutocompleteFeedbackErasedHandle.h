@class CNContact;

@interface _PSCNAutocompleteFeedbackErasedHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CNContact *contact;

- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
