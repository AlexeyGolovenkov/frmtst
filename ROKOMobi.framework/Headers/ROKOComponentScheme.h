//
//  ROKOComponentScheme.h
//  ROKOComponents
//
//  Created by Alexey Golovenkov on 17.04.15.
//  Copyright (c) 2015 ROKOLabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOImageDataObject.h"
#import "ROKOFontDataObject.h"

extern NSString *const kROKOInstaBotDefaultFontFamily;
extern NSString *const kROKOInstaBotDefaultBackgroundColor;
extern CGFloat const kROKOInstaBotDefaultBackgroundOpacityf;
extern CGFloat const kROKOInstaBotDefaultFontSize;
extern NSString *const kROKOInstaBotDefaultFontColor;
extern CGFloat const kROKOInstaBotDefaultUserResponsePadding;
extern CGFloat const kROKOInstaBotDefaultUserResponseBorderRadius;
extern CGFloat const kROKOInstaBotDefaultMessageQuestionWidth;
extern CGFloat const kROKOInstaBotDefaultMessageQuestionPadding;
extern CGFloat const kROKOInstaBotDefaultMessageQuestionBorderRadius;
extern CGFloat const kROKOInstaBotDefaultCloseButtonSize;
extern CGFloat const kROKOInstaBotDefaultChatIconBorderRadius;
extern NSString *const kROKOInstaBotDefaultCloseButtonText;

@interface ROKOComponentScheme : NSObject <NSCoding>

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (void)loadFromDictionary:(NSDictionary *)dictionary;

// Parsing helpers
- (UIColor *)decodeColorFromCoder:(NSCoder *)aDecoder forKey:(NSString *)key;
- (ROKODataObject *)dataObjectFromDictionary:(NSDictionary *)dictionary withKey:(NSString *)key;
- (ROKOFontDataObject *)fontDataObjectFromDictionary:(NSDictionary *)dictionary withKey:(NSString *)key;
- (UIColor *)colorFromDictionary:(NSDictionary *)dictionary withKey:(NSString *)key;

- (id)compareObjectsForNil:(id)first second:(id)second;

- (NSInteger)compareEnumValuesForNonSet:(NSInteger)first second:(NSInteger)second;

- (ROKOComponentScheme *)mergeSchemeWith:(ROKOComponentScheme *)second;

@end
