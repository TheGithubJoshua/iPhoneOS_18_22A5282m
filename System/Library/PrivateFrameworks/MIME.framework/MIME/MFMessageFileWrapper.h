@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject {
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}

@property (copy, nonatomic) NSString *path;

- (unsigned long long)fileSize;
- (id)filename;
- (BOOL)isDirectory;
- (void)setType:(unsigned int)a0;
- (BOOL)isPlaceholder;
- (id)fileAttributes;
- (id)mimeType;
- (id)URL;
- (void)setMimeType:(id)a0;
- (id)initWithPath:(id)a0;
- (void)setURL:(id)a0;
- (void)setMessageID:(id)a0;
- (id)fileProtection;
- (void)setFileProtection:(id)a0;
- (void)setFilename:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSymbolicLink;
- (id)messageID;
- (void)dealloc;
- (BOOL)isRegularFile;
- (unsigned int)type;
- (id)contentID;
- (id)fileWrappers;
- (id)initRegularFileWithContents:(id)a0;
- (id)preferredFilename;
- (id)regularFileContents;
- (void)setFileAttributes:(id)a0;
- (void)setPreferredFilename:(id)a0;
- (unsigned int)creator;
- (void)setCreator:(unsigned int)a0;
- (void)setContentID:(id)a0;
- (id)eventUniqueID;
- (id)icsRepresentation;
- (id)inferredMimeType;
- (BOOL)isImageFile;
- (BOOL)isPDFFile;
- (id)meetingStorePersistentID;
- (void)setMeetingStorePersistentID:(id)a0;
- (id)symbolicLinkDestination;
- (void)setFinderFlags:(unsigned short)a0;
- (void)_isImage:(BOOL *)a0 orPDFFile:(BOOL *)a1;
- (unsigned short)finderFlags;
- (id)initSymbolicLinkWithDestination:(id)a0;
- (BOOL)isUnzippableFile;
- (void)setEventUniqueID:(id)a0;
- (void)setICSRepresentation:(id)a0;

@end
