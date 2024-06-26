@interface ICAppURLUtilities : NSObject

+ (id)predicateForNoteMentionedInURL:(id)a0 action:(id)a1 queryItemName:(id)a2;
+ (id)folderIdentifierForShowNoteURL:(id)a0;
+ (BOOL)isShowPaperURL:(id)a0;
+ (id)predicateForNoteMentionedInURL:(id)a0;
+ (id)noteIdentifierFromQuickNoteURL:(id)a0;
+ (id)predicateForNoteWithIdentifier:(id)a0;
+ (id)appURLForContainingFolderWithNoteFocused:(id)a0;
+ (id)appURLForDefaultFolder;
+ (id)appURLForFolder:(id)a0;
+ (id)appURLForFolderList;
+ (id)appURLForHTMLFolder:(id)a0;
+ (id)appURLForHTMLNote:(id)a0;
+ (id)appURLForNote:(id)a0;
+ (id)appURLForNote:(id)a0 inFolder:(id)a1;
+ (id)appURLForShowSmartFoldersHelp;
+ (id)attachmentIdentifierFromQuickNoteURL:(id)a0;
+ (id)contentOffsetFromQuickNoteURL:(id)a0;
+ (id)firstQueryItemInURL:(id)a0 andHost:(id)a1 andQueryItemName:(id)a2;
+ (BOOL)isHTMLFolderEntityURI:(id)a0;
+ (BOOL)isHTMLNoteEntityURI:(id)a0;
+ (BOOL)isLaunchingQuickNoteViaPencil:(id)a0;
+ (BOOL)isModernFolderEntityURI:(id)a0;
+ (BOOL)isModernNoteEntityURI:(id)a0;
+ (BOOL)isNewNoteURL:(id)a0;
+ (BOOL)isQuickNoteModeURL:(id)a0;
+ (BOOL)isShowDefaultFolderURL:(id)a0;
+ (BOOL)isShowFolderListURL:(id)a0;
+ (BOOL)isShowFolderURL:(id)a0;
+ (BOOL)isShowFolderURL:(id)a0 options:(unsigned long long)a1;
+ (BOOL)isShowHTMLFolderURL:(id)a0;
+ (BOOL)isShowHTMLFolderURL:(id)a0 options:(unsigned long long)a1;
+ (BOOL)isShowHTMLNoteURL:(id)a0;
+ (BOOL)isShowLegacyNoteURL:(id)a0;
+ (BOOL)isShowNoteFocusedInFolderURL:(id)a0;
+ (BOOL)isShowNoteURL:(id)a0;
+ (BOOL)isShowNoteURL:(id)a0 options:(unsigned long long)a1;
+ (BOOL)isShowSmartFoldersHelpURL:(id)a0;
+ (BOOL)isSystemPaperURL:(id)a0;
+ (id)modernNoteIdentifierFromEntityURI:(id)a0;
+ (id)objectIDForHTMLFolderEntityURI:(id)a0 context:(id)a1;
+ (id)objectIDForHTMLFolderMentionedInURL:(id)a0 context:(id)a1;
+ (id)objectIDForHTMLFolderMentionedInURL:(id)a0 options:(unsigned long long)a1 context:(id)a2;
+ (id)objectIDForModernFolderEntityURI:(id)a0 noteContext:(id)a1;
+ (id)objectIDForModernFolderMentionedInURL:(id)a0 noteContext:(id)a1;
+ (id)objectIDForModernFolderMentionedInURL:(id)a0 options:(unsigned long long)a1 noteContext:(id)a2;
+ (id)objectIDURIRepresentationForFolderMentionedInLegacyShowFolderURL:(id)a0;
+ (id)objectIDURIRepresentationForFolderMentionedInLegacyShowHTMLFolderURL:(id)a0;
+ (id)objectIDURIRepresentationForHTMLNoteEntityURI:(id)a0 context:(id)a1;
+ (id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)a0;
+ (id)predicateForFolderWithNoteFocusedInURL:(id)a0;
+ (id)predicateForNoteMentionedInURL:(id)a0 action:(id)a1;
+ (BOOL)quickNoteURLIsContinuing:(id)a0;
+ (BOOL)quickNoteURLShouldShowList:(id)a0;
+ (BOOL)quickNoteURLShouldShowShareSheet:(id)a0;
+ (BOOL)quickNoteURLShouldShowiCloudShareSheet:(id)a0;
+ (id)referralURLForSnapshotBackgroundTask;
+ (id)urlForQuickNoteWithOptions:(id)a0;

@end
