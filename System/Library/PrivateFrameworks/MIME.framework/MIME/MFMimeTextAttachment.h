@interface MFMimeTextAttachment : MFMessageTextAttachment

- (void)download;
- (unsigned int)approximateSize;
- (id)_displayedMimePart;
- (BOOL)hasBeenDownloaded;
- (id)initWithMimePart:(id)a0;

@end
