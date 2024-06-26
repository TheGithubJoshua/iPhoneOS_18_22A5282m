@class NSString, STContactAddress, NSArray, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {
    BOOL _outbound;
    STContactAddress *_senderAddress;
    NSString *_senderInternalGUID;
    NSArray *_recipientAddresses;
    NSString *_groupName;
    NSString *_groupNameId;
    NSString *_subjectText;
    NSString *_bodyText;
    NSString *_effect;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void)setBodyText:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bodyText;
- (id)init;
- (void)setGroupName:(id)a0;
- (void)setEffect:(id)a0;
- (id)groupName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)effect;
- (void)setRecipientAddresses:(id)a0;
- (id)recipientAddresses;
- (id)attachmentURL;
- (void)setAttachmentURL:(id)a0;
- (id)chatIdentifier;
- (void)setChatIdentifier:(id)a0;
- (id)senderAddress;
- (void)setSenderAddress:(id)a0;
- (void)setSubjectText:(id)a0;
- (void)setGroupNameId:(id)a0;
- (id)_aceContextObjectValue;
- (void)_setSenderInternalGUID:(id)a0;
- (id)groupNameId;
- (BOOL)isOutbound;
- (id)sendDate;
- (id)senderInternalGUID;
- (void)setOutbound:(BOOL)a0;
- (void)setSendDate:(id)a0;
- (id)subjectText;

@end
