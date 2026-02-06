# # 🛣️ EDA Findings – Tamil Nadu Road Accident Analysis (Jan–Jun 2025)

*Prepared for RakshaMarg Estimator / RakshaMargGPT Project*


## 📌 1. Objective of EDA

The purpose of this Exploratory Data Analysis (EDA) is to understand district-wise accident patterns, identify high-risk zones, analyze contributing factors (helmet non-compliance, driver violations, vehicle types), and derive insights that will support:

* **Intervention Score Calculation**
* **Recommendation Engine**
* **Risk Forecasting**
* **GPT-based query answering**

## 📂 2. Datasets Used

> Dataset [Source](https://tnsta.gov.in/pdfpage/pdfpage_tn_3zDPDGG_2025_08_06.pdf)

| Dataset                | Columns                                                | Purpose                               |
| ---------------------- | ------------------------------------------------------ | ------------------------------------- |
| `district_monthly.csv` | district, month, accidents, deaths, injuries           | Time-based accident trends            |
| `helmet_deaths.csv`    | district, month, helmet_deaths                         | Fatalities due to non-wearing helmets |
| `hotspots_funding.csv` | district, hotspots_identified, hotspots_funded, amount | Funding gaps & hotspot severity       |
| `road_type.csv`        | road_type, accidents, deaths                           | Infra-level accident severity         |
| `vehicle_type.csv`     | vehicle_type, accidents, deaths                        | Accident contribution by vehicle      |
| `driver_violation.csv` | violation_type, dl_suspensions                         | Traffic behavior factors              |

## 🚦 3. Key Insights

### ### 🔥 3.1 District-Level Accident & Fatality Patterns

* **Top contributing districts** (𝘥𝘦𝘢𝘵𝘩𝘴):
  * Coimbatore - 485
  * Tiruppur - 417
  * Madurai - 403
  * Salem - 399
  * Chengalpattu - 397

* These **top 5 districts contribute ~24.3%** of total fatalities.


## 🏍️ 3.2 Helmet Non-Compliance Impact

* Districts with high **helmet-deaths** also show higher fatality rates overall.
* Notable districts where **helmet-related deaths >20–25%** of total deaths.
* Strong correlation observed between **helmet non-compliance ↔ fatal injuries**.


## 🚘 3.3 Vehicle-Type Accident Contribution

* **Two-wheelers account for the highest share** of accidents and deaths.
* Light Motor Vehicles (LMVs) contribute the second-largest proportion.
* Heavy Motor Vehicles (HMV) show lower accident counts but **higher fatality severity**.


## 🛣️ 3.4 Road-Type Severity Analysis

* **National Highways (NH)** show the highest number of accidents AND fatalities.
* **State Highways (SH)** contribute moderately.
* **Village Roads** show lower accidents but higher fatality ratios in some districts.
* Fatality Ratio = deaths ÷ accidents is highest on:
  → *(Fill from your data)*


## 💰 3.5 Hotspots & Funding Gap Insights

* Several districts have **high hotspot counts but low funding coverage**.
* Significant funding gap in districts like:
  → *(Insert district names with high “unfunded hotspots”)*
* High number of **unfunded hotspots strongly correlates with fatalities**.


## ⚖️ 3.6 Driver Behavior (Violation Data)

* Speeding contributes a disproportionately high share of DL suspensions.
* Mobile-phone usage & signal jumping also show notable numbers.
* These behavior indicators align with accident-heavy districts.

---

## 📈 3.7 Month-wise Trends (Jan–Jun 2025)

* Accidents peak during **April–May**, slight dip observed in June.
* Fatalities follow a similar trend curve.
* Seasonal/holiday periods may influence accident spikes.

---

## 📊 4. Correlation Summary

The correlation matrix shows the following strong patterns:

| Factor                          | Correlation   | Interpretation                    |
| ------------------------------- | ------------- | --------------------------------- |
| Accidents vs Deaths             | High (+)      | More accidents → more fatalities  |
| Helmet deaths vs Total deaths   | High (+)      | Helmet non-compliance is critical |
| Hotspots_unfunded vs Deaths     | Moderate/High | Funding gaps increase risk        |
| NH accidents vs Total accidents | High          | NH is the riskiest road type      |

---

## 🎯 5. Conclusions from EDA

* **Intervention Priority Districts:** Districts with a combination of high accidents, high fatalities, and high helmet-death counts should be top priority.
* **Helmet enforcement** should be a key policy focus.
* **Speeding and driver violations** require targeted enforcement campaigns.
* **Unfunded hotspot clusters** are strong candidates for immediate engineering interventions.
* **NH stretches** appear to be the most dangerous, requiring structured redesign efforts.

---

## 🔧 6. How These Findings Will Be Used Next

These insights feed directly into:

### ✔️ Phase 3 — *Intervention Score Calculation*

Using weighted metrics from:

* Total accidents
* Fatalities
* Helmet-related fatality share
* Unfunded hotspots
* Road-type severity
* Driver violations

### ✔️ Phase 4 — *Intervention Recommender Engine*

Mapping findings to:

* Engineering interventions
* Enforcement actions
* Behavioral interventions
* Awareness programs

### ✔️ Phase 5 — *RakshaMargGPT*

The LLM will answer questions like:

* “Which district needs urgent intervention funding?”
* “Where should helmet enforcement be strengthened?”
* “Which road types require immediate engineering fixes?”

---

## 📌 7. Appendix (Optional)

* List of all districts with summary values
* Screenshots of top charts
* Notes about missing data or assumptions
