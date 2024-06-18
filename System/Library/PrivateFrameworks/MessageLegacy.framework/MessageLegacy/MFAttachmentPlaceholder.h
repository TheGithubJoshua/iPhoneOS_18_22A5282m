@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}

+ (id)placeholder;
+ (id)_placeholderMagic;
+ (id)dataForPlaceholder:(id)a0;
+ (BOOL)isPlaceholderSerializedRepresentation:(id)a0;
+ (id)placeholderFromSerializedRepresentation:(id)a0;

- (void)setFileSize:(unsigned long long)a0;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)init;
- (id)serializedRepresentation;
- (id)mimeType;
- (void)setMimeType:(id)a0;
- (void)setFileName:(id)a0;
- (id)description;
- (void)dealloc;
- (id)contentID;
- (void)setContentID:(id)a0;
- (void)setUseMailDrop:(BOOL)a0;
- (void)_setJSONDictionary:(id)a0;
- (id)fileURLString;
- (void)setFileURLString:(id)a0;
- (BOOL)useMailDrop;

@end
