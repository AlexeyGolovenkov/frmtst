//
//  ROKOInstaBotUISchemesEnums.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 30/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#ifndef ROKOInstaBotUISchemesEnums_h
#define ROKOInstaBotUISchemesEnums_h

typedef NS_ENUM(NSInteger, ROKOInstaBotBackgroundImageRepeatMode) {
    ROKOInstaBotBackgroundImageRepeatModeNotSet = 0,
    ROKOInstaBotBackgroundImageRepeatModeNoRepeat,
    ROKOInstaBotBackgroundImageRepeatModeRepeat
};


typedef NS_ENUM(NSInteger, ROKOInstaBotBackgroundImagePosition) {
    ROKOInstaBotBackgroundImagePositionNotSet = 0,
    ROKOInstaBotBackgroundImagePositionCenter,
    ROKOInstaBotBackgroundImagePositionTop,
    ROKOInstaBotBackgroundImagePositionLeft,
    ROKOInstaBotBackgroundImagePositionBottom,
    ROKOInstaBotBackgroundImagePositionRight
};

typedef NS_ENUM(NSInteger, ROKOFontStyle) {
    ROKOFontStyleNotSet = 0,
    ROKOFontStyleNone,
    ROKOFontStyleBold,
    ROKOFontStyleItalic,
    ROKOFontStyleUnderlined,
    ROKOFontStyleStrikethrough,
};


#endif /* ROKOInstaBotUISchemesEnums_h */
